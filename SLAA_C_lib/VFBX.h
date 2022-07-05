#pragma once

#include <fbxsdk.h>

#include "Common.h"
#include "Thumbnail.h"

#define SAMPLE_FILENAME "ExportScene01.fbx"

// Function prototypes.
bool CreateScene(FbxManager* pSdkManager, FbxScene* pScene);

FbxNode* CreatePatch(FbxScene* pScene, const char* pName);
FbxNode* CreateSkeleton(FbxScene* pScene, const char* pName);

void LinkPatchToSkeleton(FbxScene* pScene, FbxNode* pPatch, FbxNode* pSkeletonRoot);
void StoreBindPose(FbxScene* pScene, FbxNode* pPatch);
void StoreRestPose(FbxScene* pScene, FbxNode* pSkeletonRoot);
void AnimateSkeleton(FbxScene* pScene, FbxNode* pSkeletonRoot);
void AddThumbnailToScene(FbxScene* pScene);
void AddNodeRecursively(FbxArray<FbxNode*>& pNodeArray, FbxNode* pNode);
void SetXMatrix(FbxAMatrix& pXMatrix, const FbxMatrix& pMatrix);

//--------------------------------------------------------------------------------------------------------
// Cpp functions for c to call
#ifdef __cplusplus
extern "C" {
#endif

	int _Cpp_ExportFBX();

#ifdef __cplusplus
}
#endif