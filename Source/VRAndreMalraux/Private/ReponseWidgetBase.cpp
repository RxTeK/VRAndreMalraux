// Fill out your copyright notice in the Description page of Project Settings.

#include "ReponseWidgetBase.h"

FText UReponseWidgetBase::GetText() const
{
	return Text;
}

void UReponseWidgetBase::SetText(FText InText)
{
	Text = InText;
	ApplyTextToChildren(GetText());
}

void UReponseWidgetBase::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	const FText ResolvedText = (TextDelegate.IsBound() && !IsDesignTime())
		? TAttribute<FText>::Create(TextDelegate.GetUObject(), TextDelegate.GetFunctionName()).Get()
		: Text;

	ApplyTextToChildren(ResolvedText);
}
