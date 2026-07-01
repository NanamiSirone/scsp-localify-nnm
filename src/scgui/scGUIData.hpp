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
	extern Vector3_t customCamRotEuler;

	extern bool enableCustomCamFov;
	extern float customCamFov;

	extern bool enableCustomCamFovOffset;
	extern float customCamFovOffsetAdd;
	extern float customCamFovOffsetMult;

	extern bool enableCustomCamOffset;
	extern Vector3_t customCamOffset;

	extern float sysCamNearClip;
	extern bool enableCustomCamNearClip;
	extern float customCamNearClip;

	extern float sysCamFarClip;              // <--- 新增
	extern bool enableCustomCamFarClip;      // <--- 新增
	extern float customCamFarClip;           // <--- 新增

	extern bool disableDepthOfField;

	extern bool disableCharacterNearFade;    // <--- 新增：禁用角色近端虚化
	void updateSysCamLookAt();
}
