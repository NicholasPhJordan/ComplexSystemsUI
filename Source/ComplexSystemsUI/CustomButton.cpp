// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomButton.h"

#define LOCTEXT_NAMESPACE "UMG"

UCustomButton::UCustomButton()
{
	static ConstructorHelpers::FObjectFinder<USlateWidgetStyleAsset> SWS_CustomButton(TEXT("/Game/UI/SWS_CustomButton"));

	SButton::FArguments ButtonDefaults;

	ButtonDefaults.ButtonStyle(SWS_CustomButton.Object);
	WidgetStyle = *ButtonDefaults._ButtonStyle;
}

#if WITH_EDITOR
const FText UCustomButton::GetPaletteCategory()
{
	return LOCTEXT("", "Custom Creations");
}
#endif

#undef LOCTEXT_NAMESPACE