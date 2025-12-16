// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/MainPlayer.h"
#include "GameModes/GM_FlappyBird.h"

AGM_FlappyBird::AGM_FlappyBird()
{
	DefaultPawnClass = AMainPlayer::StaticClass();
}
