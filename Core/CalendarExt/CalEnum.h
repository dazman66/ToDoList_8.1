#if !defined(AFX_CALENDARENUM_H__09FB7C3D_BBA8_43B3_A7B3_1D95C946892B__INCLUDED_)
#define AFX_CALENDARENUM_H__09FB7C3D_BBA8_43B3_A7B3_1D95C946892B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//

/////////////////////////////////////////////////////////////////////////////

enum // options
{
	TCCO_CALCMISSINGSTARTASCREATION				= 0x00000001,
	TCCO_CALCMISSINGSTARTASDUE					= 0x00000002,
	TCCO_CALCMISSINGSTARTASEARLIESTDUEANDTODAY	= 0x00000004,
	TCCO_CALCMISSINGDUEASSTART					= 0x00000008,
	TCCO_CALCMISSINGDUEASLATESTSTARTANDTODAY	= 0x00000010,
	TCCO_DISPLAYCONTINUOUS						= 0x00000020,
	TCCO_DISPLAYSTART							= 0x00000040,
	TCCO_DISPLAYDUE								= 0x00000080,
	TCCO_DISPLAYCALCSTART						= 0x00000100,
	TCCO_DISPLAYCALCDUE							= 0x00000200,
	TCCO_ADJUSTTASKHEIGHTS						= 0x00000400,
	TCCO_DISPLAYDONE							= 0x00000800,
	TCCO_TASKTEXTCOLORISBKGND					= 0x00001000,
	TCCO_STRIKETHRUDONETASKS					= 0x00002000,
	TCCO_PREVENTDEPENDENTDRAGGING				= 0x00004000,
	TCCO_TREATOVERDUEASDUETODAY					= 0x00008000,
	TCCO_HIDEPARENTTASKS						= 0x00010000,
	TCCO_SHOWPARENTTASKSASFOLDER				= 0x00020000,
	TCCO_ENABLELABELTIPS						= 0x00040000,
	TCCO_SHOWFUTUREITEMS						= 0x00080000,

	TCCO_DATEDISPLAYOPTIONS						= (TCCO_DISPLAYCONTINUOUS | 
													TCCO_DISPLAYSTART | 
													TCCO_DISPLAYDUE | 
													TCCO_DISPLAYDONE | 
													TCCO_DISPLAYCALCSTART | 
													TCCO_DISPLAYCALCDUE)
};

/////////////////////////////////////////////////////////////////////////////

enum TCC_HITTEST
{
	TCCHT_NOWHERE = -1,
	TCCHT_BEGIN,
	TCCHT_MIDDLE,
	TCCHT_END,
};

/////////////////////////////////////////////////////////////////////////////

enum TCC_SNAPMODE
{
	TCCSM_NONE = -1,
	TCCSM_NEARESTDAY,
	TCCSM_NEARESTHALFDAY,
	TCCSM_NEARESTHOUR,
	TCCSM_FREE,
};

/////////////////////////////////////////////////////////////////////////////

enum TCC_MONTHSTYLE
{
	TCCMS_NONE,
	TCCMS_NUMBER,
	TCCMS_SHORT,
	TCCMS_LONG
};

/////////////////////////////////////////////////////////////////////////////

const double	ONE_MINUTE		= (1.0 / (24.0 * 60));
const double	ONE_HOUR		= (1.0 / 24.0);
const double	TWELVE_HOURS	= (12.0 / 24.0);
const int		DAY_IN_SECONDS	= (24 * 60 * 60);
const int		WEEK_IN_SECONDS	= (DAY_IN_SECONDS * 7);

/////////////////////////////////////////////////////////////////////////////

#endif // !defined(AFX_CALENDARENUM_H__09FB7C3D_BBA8_43B3_A7B3_1D95C946892B__INCLUDED_)
