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

	// ======== 新增: 旋转补偿位移 (Rot-to-Pos Comp) ========
	extern bool enableRotToPosComp;      // 开关
	extern float rotToPosDist;           // 补偿距离比例 (目标距离)
	extern Vector3_t compPosOffset;      // 内部计算出的实时位移偏移量
	extern Quaternion_t refGameRot;      // 内部记录的初始参考旋转
	extern bool isRefRotSet;             // 内部状态标记

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
	void updateSysCamLookAt();
}
