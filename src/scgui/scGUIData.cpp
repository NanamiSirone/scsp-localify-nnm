#include <stdinclude.hpp>

namespace SCGUIData {
	bool needExtractText = false;

	int screenW = 3840;
	int screenH = 2160;
	bool screenFull = true;

	float sysCamFov = 60;
	Vector3_t sysCamPos{};
	Vector3_t sysCamLookAt{};
	Quaternion_t sysCamRot{};

	bool enableCustomCamRot = false;
	Quaternion_t customCamRot{ 0.0f, 0.0f, 0.0f, 1.0f }; // 默认初始值给个合法的四元数

	bool enableCustomCamFov = false;
	float customCamFov = 60.0f;

	bool enableCustomCamOffset = false;
	Vector3_t customCamOffset = { 0.0f, 0.0f, 0.0f };


	void updateSysCamLookAt() {
		BaseCamera::CameraPosRotToLookAt(sysCamPos, sysCamRot, &sysCamLookAt);
	}

}
