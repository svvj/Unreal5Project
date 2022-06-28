// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Dawn, Log, All);		// Log category "Dawn"
#define DCLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define DCLOG_S(Verbosity) UE_LOG(Dawn, Verbosity, TEXT("%s"), *DCLOG_CALLINFO)
#define DCLOG(Verbosity, Format, ...) UE_LOG(Dawn, Verbosity, TEXT("%s %s"), *DCLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
#define DCCHECK(Expr, ...) { if(!(Expr)) {DCLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__; }}