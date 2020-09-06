// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomFileWriter.generated.h"

/**
 * 
 */
UCLASS()
class COZ_API UCustomFileWriter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "Files", meta = (Keywords = "Load File"))
		static bool LoadFile(FString Path, FString FileName, FString& Text);
	UFUNCTION(BlueprintCallable, Category = "Files", meta = (Keywords = "Save File"))
		static bool SaveFile(FString Path, FString FileName, FString Text);
};
