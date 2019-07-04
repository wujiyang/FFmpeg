#pragma once

class CSeqParamSet;

class CNALUnit
{
public:
	CNALUnit(UINT8 *pSODB, UINT32 SODBLength, UINT8 nalType);
	~CNALUnit();

	//sps
	int Parse_as_seq_param_set(CSeqParamSet* sps);


private:
	UINT8  *pSODB;
	UINT32 SODBLength;
	
	UINT8  nalType;
};

