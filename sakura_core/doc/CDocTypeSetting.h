#pragma once

#include "CRegexKeyword.h" //struct RegexKeywordInfo

// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //
//                          �F�ݒ�                             //
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //

//! �F�ݒ�
struct ColorInfoBase{
	BOOL		m_bDisp;			//!< �\��
	BOOL		m_bFatFont;			//!< ����
	BOOL		m_bUnderLine;		//!< ����
	COLORREF	m_colTEXT;			//!< �����F
	COLORREF	m_colBACK;			//!< �w�i�F
};

//! ���O�ƃC���f�b�N�X�t���F�ݒ�
struct NamedColorInfo : public ColorInfoBase{
	int			m_nColorIdx;		//!< �C���f�b�N�X
	TCHAR		m_szName[64];		//!< ���O
};


typedef NamedColorInfo ColorInfo;


//�f�t�H���g�F�ݒ�
void GetDefaultColorInfo(ColorInfo* pColorInfo, int nIndex);
int GetDefaultColorInfoCount();



// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //
//                           ����                              //
// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //
//@@@ 2006.04.10 fon ADD-start
const int DICT_ABOUT_LEN = 50; /*!< �����̐����̍ő咷 -1 */
struct KeyHelpInfo {
	int			m_nUse;						//!< ������ �g�p����/���Ȃ�
	TCHAR		m_szAbout[DICT_ABOUT_LEN];	//!< �����̐���(�����t�@�C����1�s�ڂ��琶��)
	SFilePath	m_szPath;					//!< �t�@�C���p�X
};
//@@@ 2006.04.10 fon ADD-end


#include "types/CType.h"