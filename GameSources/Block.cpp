#include "stdafx.h"
#include "Project.h"

namespace basecross {
	void Block::OnCreate()
	{
		auto drawComp = AddComponent<PNTStaticDraw>();
		drawComp->SetMeshResource(L"DEFAULT_CUBE");
	}
}
