#pragma once

namespace SCGUIData {
	extern bool needExtractText;
	extern int screenW;
	extern int screenH;
	extern bool screenFull;

	extern float sysCamFov;
	extern Vector3_t sysCamPos;
	extern Vector3_t sysCamLookAt;
	extern Quaternion_t sysCamRot;

	extern bool enableCustomCamRot;       // 是否启用自定义旋转覆盖
	extern Quaternion_t customCamRot;     // 存储用户输入的自定义旋转

	void updateSysCamLookAt();
}
