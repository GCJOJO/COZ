

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConnectToEOS.generated.h"

/**
 * 
 */
UCLASS()
class COZ_API UConnectToEOS : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "EOS Basic")
		bool RequestLogin(FString Id, FString Token, FString Type);
	
};
