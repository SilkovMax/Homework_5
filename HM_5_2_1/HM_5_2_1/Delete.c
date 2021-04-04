Delete()
{

	
	 minCost = atoi(lr_eval_string("{priceTicket_1}"));
         lr_output_message("Цена билета 1: %d $.\n\t--------------------",minCost);
         
     elemCnt = atoi(lr_eval_string("{priceTicket_count}"));
    	  lr_output_message("Кол-во элементов счетчика=%d",elemCnt);
 
     
     
     
     
     for(i=2;i<=elemCnt;i++){
    	  	sprintf(arrayPrice, "{priceTicket_%d}", i);
    	  	cost = atoi(lr_eval_string(arrayPrice));
    	  	sprintf(arrayCheck, "{NameCheckBox_%d}", i); 
		    check = lr_eval_string(arrayCheck);
	        lr_output_message ("Цена билета %d: %d $.\n\t--------------------", i, cost);
			
	        if (cost<minCost) {
				minCost=cost;
			    checkForDelete=check;
		}
	}
	lr_save_string(checkForDelete,"checkbox"); //создаем параметр имя чекбокса
	lr_output_message("Билет с минимальной ценой стоит: %d $\n\t--------------------", minCost);
    	  	 	  	

		
	
	web_submit_data("itinerary.pl",
		"Action={Host}/cgi-bin/itinerary.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer={Host}/cgi-bin/itinerary.pl",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name={checkbox}", "Value=on", ENDITEM,
		"Name=flightID", "Value={FlightID_1}", ENDITEM,
		"Name=flightID", "Value={FlightID_2}", ENDITEM,
		"Name=flightID", "Value={FlightID_3}", ENDITEM,
		"Name=removeFlights.x", "Value=74", ENDITEM,
		"Name=removeFlights.y", "Value=6", ENDITEM,
		LAST);
	lr_output_message("-------------Билет удален-------------------");
	


	return 0;
}