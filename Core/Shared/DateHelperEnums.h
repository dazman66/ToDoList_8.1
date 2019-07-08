// DateHelper.h: interface for the CDateHelper class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATEHELPERENUMS_H__2A4E63F6_A106_4295_BCBA_06D03CD67AE7__INCLUDED_)
#define AFX_DATEHELPERENUMS_H__2A4E63F6_A106_4295_BCBA_06D03CD67AE7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//////////////////////////////////////////////////////////////////////

enum DH_DATE
{
	DHD_BEGINTHISWEEK, // DHD_ENDTHIDWEEK - 6
	DHD_TODAY,
	DHD_TOMORROW,
	DHD_ENDTHISWEEK,   
	DHD_ENDNEXTWEEK,   // DHD_ENDTHISWEEK + 7
	DHD_ENDTHISMONTH,  // beginning of next month - 1
	DHD_ENDNEXTMONTH,  // gets trickier :)
	DHD_ENDTHISYEAR,
	DHD_ENDNEXTYEAR,
	DHD_YESTERDAY,
	DHD_NOW,
	DHD_BEGINTHISMONTH, 
	DHD_BEGINTHISYEAR, 
};

enum DH_UNITS
{
	DHU_NULL		= 0,	// error code
	DHU_WEEKDAYS	= 'd',
	DHU_DAYS		= 'D',
	DHU_WEEKS		= 'W',
	DHU_MONTHS		= 'M',
	DHU_YEARS		= 'Y',
};

enum
{
	DHFD_ISO		= 0x0001,
	DHFD_DOW		= 0x0002,
	DHFD_TIME		= 0x0004,
	DHFD_NOSEC		= 0x0008,
	DHFD_NOYEAR		= 0x0010,
	DHFD_NODAY		= 0x0020,
	DHFD_NOCENTURY	= 0x0040,
};

enum DH_DAYOFWEEK // Days of week bit flags
{
	DHW_NONE		= 0X00,

	DHW_SUNDAY		= 0X01,
	DHW_MONDAY		= 0X02,
	DHW_TUESDAY		= 0X04,
	DHW_WEDNESDAY	= 0X08,
	DHW_THURSDAY	= 0X10,
	DHW_FRIDAY		= 0X20,
	DHW_SATURDAY	= 0X40,

	DHW_EVERYDAY	= 0x7F
};

enum OLE_DAYOFWEEK // OLE Days of week
{
	DHO_UNDEF	= -1,

	DHO_SUNDAY	= 1,
	DHO_MONDAY,
	DHO_TUESDAY,
	DHO_WEDNESDAY,
	DHO_THURSDAY,
	DHO_FRIDAY,
	DHO_SATURDAY,
};

static OLE_DAYOFWEEK OLE_DAYSOFWEEK[7] =
{
	DHO_SUNDAY,
	DHO_MONDAY,
	DHO_TUESDAY,
	DHO_WEDNESDAY,
	DHO_THURSDAY,
	DHO_FRIDAY,
	DHO_SATURDAY,
};

enum // Compare Flags
{
	DHC_COMPARETIME			= 0x01,
	DHC_COMPARESECONDS		= 0x02, // ignored without DHC_COMPARETIME
	DHC_NOTIMEISENDOFDAY	= 0x04, // ignored without DHC_COMPARETIME
};

//////////////////////////////////////////////////////////////////////

#endif // !defined(AFX_DATEHELPERENUMS_H__2A4E63F6_A106_4295_BCBA_06D03CD67AE7__INCLUDED_)
