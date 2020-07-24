

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UpdateGame.generated.h"

UCLASS()
class COZ_API UUpdateGame : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "COZ", meta = (Keywords = "Check for Update"))
		static void CheckForUpdate(FString Path);
};
