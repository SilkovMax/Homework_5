Inter()
{

//	web_reg_save_param_ex(
//		"ParamName=qtTickets",
//		"LB=total of ",
//		"RB= scheduled flight",
//		LAST);
	
	web_reg_save_param_ex(
    "ParamName=FlightID", 
    "LB/IC=\"flightID\" value=\"",
    "RB/IC=\"",
    "Ordinal=All",
	LAST);
	
	web_reg_save_param_ex(
		"ParamName=priceTicket",
		"LB=Total Charge: $ ",
		"RB= <",
		"Ordinal=All",
		LAST);

	web_reg_save_param_ex(
		"ParamName=NameCheckBox",
    	"LB=\"checkbox\" name=\"",
    	"RB=\"",
    	"Ordinal=All", 
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=NameCity",
    	"LB=leaves ",
    	"RB=  for",
    	"Ordinal=All", 
		LAST);
	
	//elemCnt = atoi(lr_eval_string("{priceTicket_count}"));
    //	  lr_output_message("Кол-во элементов счетчика=%d",elemCnt);
	
    lr_output_message(lr_eval_string("{NameCity}"));
	
	
//		lr_output_message("Price first ticket = %d",atoi(lr_eval_string("{FlightID_count}")));
	
//	

	
	
	
	web_url("Itinerary Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	
	
	

	return 0;
}