Delete()
{

	char*NOTLondon;
	char*London="London"; 
//	 minCost = atoi(lr_eval_string("{priceTicket_1}"));
//         lr_output_message("���� ������ 1: %d $.\n\t--------------------",minCost);
         
     elemCnt = atoi(lr_eval_string("{priceTicket_count}"));
    	  lr_output_message("���-�� ��������� ��������=%d",elemCnt);
 
     
     
     
     
    for(i=1;i<=elemCnt;i++){
    	  	sprintf(arrayCity, "{NameCity_%d}", i);
    	  	cityN = lr_eval_string(arrayCity);
    	  	sprintf(arrayCheck, "{NameCheckBox_%d}", i); 
		    check = lr_eval_string(arrayCheck);
	        lr_output_message ("����� ������ %d: %s \n\t--------------------", i, cityN);
			
	        if (strcmp(cityN,London)!=0) {
	        	NOTLondon=cityN;
				checkForDelete=check;
			lr_output_message (NOTLondon);
		}
	}
	lr_save_string(checkForDelete,"checkbox"); //������� �������� ��� ��������
	lr_output_message("����� � ������� �� �� ������� �������� �� %s \n\t--------------------",
	                  NOTLondon);
    	  	 	  	

		
	
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
	lr_output_message("-------------����� ������-------------------");
	


	return 0;
}