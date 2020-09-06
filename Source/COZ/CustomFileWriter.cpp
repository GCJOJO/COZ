// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomFileWriter.h"

bool UCustomFileWriter::LoadFile(FString Path, FString FileName, FString& Text)
{
	return FFileHelper::LoadFileToString(Text, *(Path + FileName));
}

bool UCustomFileWriter::SaveFile(FString Path, FString FileName, FString Text)
{
	return FFileHelper::SaveStringToFile(Text, *(Path + FileName));
}