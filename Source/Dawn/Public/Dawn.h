// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "EngineMinimal.h"


// Custom log functions
DECLARE_LOG_CATEGORY_EXTERN(Dawn, Log, All);
#define DLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define DLOG_S(Verbosity) UE_LOG(Dawn, Verbosity, TEXT("%s"), *DLOG_CALLINFO)
#define DLOG(Verbosity, Format, ...) UE_LOG(Dawn, Verbosity, TEXT("%s %s"), *DLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
#define DCHECK(Expr, ...) { if(!(Expr)) {DLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__; }}