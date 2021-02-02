#pragma once
#include "stdafx.h"

namespace basecross {
	class Grass : public GameObject
	{
	public:
		Grass(const std::shared_ptr<Stage>& stage)
			:GameObject(stage)
		{
		}
	};

}
