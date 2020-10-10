

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOSFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COZ_API UEOSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		/*UFUNCTION(BlueprintCallable, Category = "EOS")static bool EOSLoginPortal();

		UFUNCTION(BlueprintCallable, Category = "EOS") static bool EOSLoginCode();*/

		UFUNCTION(BlueprintCallable, Category = "EOS")static bool EOSRequestLogin(FString Id, FString Token, FString Type);


};
