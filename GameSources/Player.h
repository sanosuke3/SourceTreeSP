/*!
@file Player.h
@brief プレイヤーなど
*/

#pragma once
#include "stdafx.h"

namespace basecross{
	class Player : public GameObject
	{
	public:
		Player(const std::shared_ptr<Stage>& stage)
			:GameObject(stage)
		{
		}

		void OnCreate() override;
		void OnUpdate() override;
	};
}
//end basecross

