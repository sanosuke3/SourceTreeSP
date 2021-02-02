/*!
@file Player.cpp
@brief �v���C���[�Ȃǎ���
*/

#include "stdafx.h"
#include "Project.h"

namespace basecross{
	void Player::OnCreate()
	{
		auto drawComp = AddComponent<PNTStaticDraw>();
		drawComp->SetMeshResource(L"DEFAULT_SPHERE");

		auto transComp = AddComponent<Transform>();

		auto matrix = transComp->GetWorldMatrix();
		PsBoxParam param(matrix, 1.0f, false, PsMotionType::MotionTypeActive);
		auto rigidComp = AddComponent<RigidbodyBox>(param);
	}

	void Player::OnUpdate()
	{
		auto& app = App::GetApp(); // �A�v���P�[�V�����I�u�W�F�N�g���擾����

		auto device = app->GetInputDevice();
		const auto& pad = device.GetControlerVec()[0];

		auto transComp = GetComponent<Transform>();
		auto pos = transComp->GetPosition();

		if (pad.wPressedButtons & XINPUT_GAMEPAD_DPAD_LEFT)
		{
			pos += Vec3(-1.0f, 0.0f, 0.0f); // �v���C���[�����Ɉړ�������
		}
		if (pad.wPressedButtons & XINPUT_GAMEPAD_DPAD_RIGHT)
		{
			pos += Vec3(1.0f, 0.0f, 0.0f); // �v���C���[�����Ɉړ�������
		}
		if (pad.wPressedButtons & XINPUT_GAMEPAD_DPAD_UP)
		{
			pos += Vec3(0.0f, 1.0f, 0.0f); // �v���C���[�����Ɉړ�������
		}
		if (pad.wPressedButtons & XINPUT_GAMEPAD_DPAD_DOWN)
		{
			pos += Vec3(0.0f, -1.0f, 0.0f); // �v���C���[�����Ɉړ�������
		}

	}
}

//end basecross

