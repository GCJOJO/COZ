


#include "EOSFunctionLibrary.h"

// Engine Includes
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"

// EOS Plugin Includes
#include "OnlineSubsystemEOS.h"

/*bool UEOSFunctionLibrary::EOSLoginPortal()
{
	return true;
}

bool UEOSFunctionLibrary::EOSLoginCode()
{
	return false;
}*/

bool UEOSFunctionLibrary::EOSRequestLogin(FString Id, FString Token, FString Type)
{
	IOnlineSubsystem* SubSystem = IOnlineSubsystem::Get(EOS_SUBSYSTEM);

	if (SubSystem != nullptr)
	{
		IOnlineIdentityPtr OnlineIdentity = SubSystem->GetIdentityInterface();

		if (OnlineIdentity != nullptr)
		{
			FOnlineAccountCredentials Credentials(Type, Id, Token);
			return OnlineIdentity->Login(0, Credentials);
		}
	}

	return false;

}

//https://www.epicgames.com/id/authorize?client_id=xyza7891RWJSJiXKnqTO3EYSRyRYmHVr&response_type=code&scope=basic_profile&redirect_uri=https:\\eos.xyza7891RWJSJiXKnqTO3EYSRyRYmHVr://epic/auth&state=rfGWJux2WL86Zxr6nKApCAnDo8KexEUE
