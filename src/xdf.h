/*****************************************************************************

    TRAVIS - Trajectory Analyzer and Visualizer

    http://www.travis-analyzer.de/

    Copyright (c) 2009-2021 Martin Brehm
                  2012-2021 Martin Thomas
                  2016-2021 Sascha Gehrke

    Please cite:  J. Chem. Phys. 2020, 152 (16), 164105.         (DOI 10.1063/5.0005078 )
                  J. Chem. Inf. Model. 2011, 51 (8), 2007-2023.  (DOI 10.1021/ci200217w )

    This file was written by Martin Brehm.

    ---------------------------------------------------------------------------

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*****************************************************************************/


#ifndef XDF_H
#define XDF_H


// This must always be the first include directive
#include "config.h"

#include "xobject.h"
#include "xbytearray.h"
#include "xdoublearray.h"
#include "xdoublearray.h"


class CXDF : public CxObject
{
public:
	void Autocorrelate();
	void InitDeriv();
	CXDF();
	~CXDF();

	void ParseDeriv();

	bool m_bSelf;
	int m_iShowMol;
	int m_iCombinations;
	int m_iDeriv;
	bool m_bDerivAbs;
	bool m_bACF;
	int m_iACFDepth;
	bool m_bACFFFT;
	bool m_bWindowFunction;
	double m_fSpecWaveNumber;
	int m_iMirror;
	int m_iZeroPadding;
	bool m_bACF_DB;
	CxDoubleArray **m_pfaACFBuffer;
	CxDoubleArray m_faACF;

	int m_iHistogramRes;
	int m_iResolution;
	CxDoubleArray *m_faData; 
	CxByteArray *m_baDataEnabled; 
	CxDoubleArray **m_pfaDerivBuffer;
	char *m_sName;
	char *m_sShortName;
	char *m_sLabelName;
};

#endif

