Action()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html", 
		"URL=http://10.10.30.94/tours/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../favicon.ico", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_submit_form("login", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value=", ENDITEM, 
		"Name=password", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=../favicon.ico", "Referer=http://10.10.30.94/cgi-bin/login?userSession=75893.0884568651DQADHfApHDHfcDtccpfAttcf&username=&password=&login.x=58&login.y=12&JSFormSubmit=off", ENDITEM, 
		LAST);

	return 0;
}