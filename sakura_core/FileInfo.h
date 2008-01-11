#pragma once
#include "basis/SakuraBasis.h"
#include "config/maxdata.h"


/*! �t�@�C�����

	@date 2002.03.07 genta m_szDocType�ǉ�
	@date 2003.01.26 aroka m_nWindowSizeX/Y m_nWindowOriginX/Y�ǉ�
*/
struct FileInfo {
	CLayoutInt	m_nViewTopLine;			/*!< �\����̈�ԏ�̍s(0�J�n) */
	CLayoutInt	m_nViewLeftCol;			/*!< �\����̈�ԍ��̌�(0�J�n) */
	CLogicPoint m_ptCursor;				//!< �J�[�\��  �����ʒu(�s������̃o�C�g��, �܂�Ԃ������s�ʒu)
	int			m_bIsModified;			/*!< �ύX�t���O */
	ECodeType	m_nCharCode;			/*!< �����R�[�h��� */
	TCHAR		m_szPath[_MAX_PATH];	/*!< �t�@�C���� */
	BOOL		m_bIsGrep;				/*!< Grep�̃E�B���h�E�� */
	BOOL		m_bIsDebug;				/*!< �f�o�b�O���[�h��(�A�E�g�v�b�g�E�C���h�E) */
	wchar_t		m_szGrepKey[1024];
	wchar_t		m_szMarkLines[MAX_MARKLINES_LEN + 1];	/*!< �u�b�N�}�[�N�̕����s���X�g */
	TCHAR		m_szDocType[MAX_DOCTYPE_LEN + 1];	/*!< �����^�C�v */
	int			m_nWindowSizeX;			/*!< �E�B���h�E  ��(�s�N�Z����) */
	int			m_nWindowSizeY;			/*!< �E�B���h�E  ����(�s�N�Z����) */
	int			m_nWindowOriginX;		/*!< �E�B���h�E  �����ʒu(�s�N�Z�����E�}�C�i�X�l���L��) */
	int			m_nWindowOriginY;		/*!< �E�B���h�E  �����ʒu(�s�N�Z�����E�}�C�i�X�l���L��) */
	
	// Mar. 7, 2002 genta
	// Constructor �m���ɏ��������邽��
	FileInfo()
		: m_nViewTopLine( -1 )
		, m_nViewLeftCol( -1 )
		, m_ptCursor(CLogicInt(-1), CLogicInt(-1))
		, m_bIsModified( 0 )
		, m_nCharCode( CODE_AUTODETECT )
		, m_bIsGrep( FALSE )
		, m_bIsDebug( FALSE )
		, m_nWindowSizeX( -1 )
		, m_nWindowSizeY( -1 )
		//	2004.05.13 Moca �g�w�薳���h��-1����CW_USEDEFAULT�ɕύX
		, m_nWindowOriginX( CW_USEDEFAULT )
		, m_nWindowOriginY( CW_USEDEFAULT )
	{
		m_szPath[0] = '\0';
		m_szMarkLines[0] = L'\0';
		m_szDocType[0] = '\0';
	}
};