#include <stdinclude.hpp>

namespace SCGUIData {
	bool needExtractText = false;

	int screenW = 1280;
	int screenH = 720;
	bool screenFull = false;

	float sysCamFov = 60;
	Vector3_t sysCamPos{};
	Vector3_t sysCamLookAt{};
	Quaternion_t sysCamRot{};

	bool enableCustomCamRot = false;
	Quaternion_t customCamRot{ 0.0f, 0.0f, 0.0f, 1.0f }; // 默认初始值给个合法的四元数

	void updateSysCamLookAt() {
		BaseCamera::CameraPosRotToLookAt(sysCamPos, sysCamRot, &sysCamLookAt);
	}

}
