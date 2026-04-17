// Fill out your copyright notice in the Description page of Project Settings.


#include "TextBlockCustom.h"

FText UTextBlockCustom::GetBindableText() const
{
	return BindableText;
}

void UTextBlockCustom::SetBindableText(FText InText)
{
	BindableText = InText;
	Super::SetText(InText);
}

void UTextBlockCustom::SetText(FText InText)
{
	BindableText = InText;
	Super::SetText(InText);
}

TAttribute<FText> UTextBlockCustom::GetDisplayText()
{
	return PROPERTY_BINDING(FText, BindableText);
}

#if WITH_EDITOR
bool UTextBlockCustom::CanEditChange(const FProperty* InProperty) const
{
	if (!Super::CanEditChange(InProperty))
	{
		return false;
	}

	return InProperty == nullptr || InProperty->GetFName() != GET_MEMBER_NAME_CHECKED(UTextBlock, Text);
}
#endif

