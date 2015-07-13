
#ifndef Base64_H
#define Base64_H

//#include "stdafx.h"
#include <string.h>

class CBase64
{

public:
	static unsigned int m_LineWidth;						//ָ�������ÿ�еĳ��ȣ�ȱʡ��76
	static const char BASE64_ENCODE_TABLE[64];				//Base64�����
	static const unsigned int BASE64_DECODE_TABLE[256];		//Base64�����
public:
	CBase64(){};
	static int Base64EncodeSize(int iSize);		//�����ļ�ʵ�ʳ��Ȼ�ȡ����Base64��ĳ���  
	static int Base64DecodeSize(int iSize);		//�����ѱ����ļ����Ȼ�ȡBase64�Ľ��볤��
	/*
	*  ��һ��Buffer����Base64����
	*
	*	 	pSrc	����Buffer
	*		nSize	Buffer����
	*		pDest	�������
	*
	*	 ע: ���Buffer�ĳ��ȿ���ʹ�� Base64EncodeSize(int) ����ȡ��
	*/
	static int base64_encode(char *pSrc, unsigned int nSize, char *pDest);

	/*
	*  ��һ��Buffer����Base64����
	*	
	*	 	pSrc	����Buffer
	*		nSize	Buffer����
	*		pDest	�������
	*		return	������ʵ�ʳ���
	*
	*	 ע: ���Buffer�ĳ��ȿ���ʹ�� Base64DecodeSize(int) ����ȡ��
	*/
	static int  base64_decode(char *pSrc, unsigned int nSize, char *pDest);


	
};
/*
class CEasySecret
{	
public:
	CEasySecret();
	~CEasySecret();
	static CString Encrypt(CString sIn);
	static CString Decrypt(CString sIn);
};
*/
#endif
