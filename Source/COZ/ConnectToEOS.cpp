


#include "ConnectToEOS.h"

// Engine Includes
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"

// EOS Plugin Includes
#include "OnlineSubsystemEOS.h"


bool UConnectToEOS::RequestLogin(FString Id, FString Token, FString Type)
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

