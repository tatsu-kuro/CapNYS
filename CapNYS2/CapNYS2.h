
// CapNYS2.h : PROJECT_NAME �A�v���P�[�V�����̃��C�� �w�b�_�[ �t�@�C���ł��B
//20200612 first commit

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH �ɑ΂��Ă��̃t�@�C�����C���N���[�h����O�� 'stdafx.h' ���C���N���[�h���Ă�������"
#endif

#include "resource.h"		// ���C�� �V���{��
#define Vertxt "CapNYS2 Version4.5 - 2019/12/25"
#define English false
//�O���O�����Ȃ��悤��
// CCapNYS2App:
// ���̃N���X�̎����ɂ��ẮACapNYS2.cpp ���Q�Ƃ��Ă��������B
//

class CCapNYS2App : public CWinApp
{
public:
	CCapNYS2App();

// �I�[�o�[���C�h
public:
	virtual BOOL InitInstance();

// ����

	DECLARE_MESSAGE_MAP()
};

extern CCapNYS2App theApp;