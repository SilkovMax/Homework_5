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
	
	
	
//		lr_output_message("Price first ticket = %d",atoi(lr_eval_string("{FlightID_count}")));
	
//	
//	for(i=1; i<
	
	
	
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