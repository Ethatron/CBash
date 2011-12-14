/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is CBash code.
 *
 * The Initial Developer of the Original Code is
 * Waruddar.
 * Portions created by the Initial Developer are Copyright (C) 2010
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */
#pragma once
// TES5File.h
#include "../Common.h"
#include "../ModFile.h"
#include "../GenericRecord.h"
#include "../GRUPRecord.h"
#include "Records/LTEXRecord.h"
/*
#include "Records/GMSTRecord.h"
#include "Records/TXSTRecord.h"
#include "Records/MICNRecord.h"
#include "Records/GLOBRecord.h"
#include "Records/CLASRecord.h"
#include "Records/FACTRecord.h"
#include "Records/HDPTRecord.h"
#include "Records/HAIRRecord.h"
#include "Records/EYESRecord.h"
#include "Records/RACERecord.h"
#include "Records/SOUNRecord.h"
#include "Records/ASPCRecord.h"
#include "Records/MGEFRecord.h"
#include "Records/SCPTRecord.h"
#include "Records/ENCHRecord.h"
#include "Records/SPELRecord.h"
#include "Records/ACTIRecord.h"
#include "Records/TACTRecord.h"
#include "Records/TERMRecord.h"
#include "Records/ARMORecord.h"
#include "Records/BOOKRecord.h"
#include "Records/CONTRecord.h"
#include "Records/DOORRecord.h"
#include "Records/INGRRecord.h"
#include "Records/LIGHRecord.h"
#include "Records/MISCRecord.h"
#include "Records/STATRecord.h"
#include "Records/SCOLRecord.h"
#include "Records/MSTTRecord.h"
#include "Records/PWATRecord.h"
#include "Records/GRASRecord.h"
#include "Records/TREERecord.h"
#include "Records/FURNRecord.h"
#include "Records/WEAPRecord.h"
#include "Records/AMMORecord.h"
#include "Records/NPC_Record.h"
#include "Records/CREARecord.h"
#include "Records/LVLCRecord.h"
#include "Records/LVLNRecord.h"
#include "Records/KEYMRecord.h"
#include "Records/ALCHRecord.h"
#include "Records/IDLMRecord.h"
#include "Records/NOTERecord.h"
#include "Records/COBJRecord.h"
#include "Records/PROJRecord.h"
#include "Records/LVLIRecord.h"
#include "Records/WTHRRecord.h"
#include "Records/CLMTRecord.h"
#include "Records/REGNRecord.h"
#include "Records/NAVIRecord.h"
#include "Records/CELLRecord.h"
#include "Records/WRLDRecord.h"
#include "Records/DIALRecord.h"
#include "Records/QUSTRecord.h"
#include "Records/IDLERecord.h"
#include "Records/PACKRecord.h"
#include "Records/CSTYRecord.h"
#include "Records/LSCRRecord.h"
#include "Records/ANIORecord.h"
#include "Records/WATRRecord.h"
#include "Records/EFSHRecord.h"
#include "Records/EXPLRecord.h"
#include "Records/DEBRRecord.h"
////#include "Records/IMGSRecord.h"
////#include "Records/IMADRecord.h"
////#include "Records/FLSTRecord.h"
////#include "Records/PERKRecord.h"
////#include "Records/BPTDRecord.h"
//#include "Records/ADDNRecord.h"
//#include "Records/AVIFRecord.h"
//#include "Records/RADSRecord.h"
//#include "Records/CAMSRecord.h"
//#include "Records/CPTHRecord.h"
//#include "Records/VTYPRecord.h"
//#include "Records/IPCTRecord.h"
//#include "Records/IPDSRecord.h"
//#include "Records/ARMARecord.h"
//#include "Records/ECZNRecord.h"
//#include "Records/MESGRecord.h"
//#include "Records/RGDLRecord.h"
//#include "Records/DOBJRecord.h"
//#include "Records/LGTMRecord.h"
//#include "Records/MUSCRecord.h"
//#include "Records/IMODRecord.h"
//#include "Records/REPURecord.h"
//#include "Records/RCPERecord.h"
//#include "Records/RCCTRecord.h"
//#include "Records/CHIPRecord.h"
//#include "Records/CSNORecord.h"
//#include "Records/LSCTRecord.h"
//#include "Records/MSETRecord.h"
//#include "Records/ALOCRecord.h"
//#include "Records/CHALRecord.h"
//#include "Records/AMEFRecord.h"
//#include "Records/CCRDRecord.h"
//#include "Records/CMNYRecord.h"
//#include "Records/CDCKRecord.h"
//#include "Records/DEHYRecord.h"
//#include "Records/HUNGRecord.h"
//#include "Records/SLPDRecord.h"
*/

class TES5File : public ModFile
    {
    public:
	TES5GRUPRecords<TES5::LTEXRecord, REV32(LTEX), 5> LTEX;
/*
        TES5GRUPRecords<TES5::GMSTRecord, REV32(GMST), 5, true> GMST;
        TES5GRUPRecords<TES5::TXSTRecord, REV32(TXST), 5> TXST;
        TES5GRUPRecords<TES5::MICNRecord, REV32(MICN), 5> MICN;
        TES5GRUPRecords<TES5::GLOBRecord, REV32(GLOB), 5> GLOB;
        TES5GRUPRecords<TES5::CLASRecord, REV32(CLAS), 5> CLAS;
        TES5GRUPRecords<TES5::FACTRecord, REV32(FACT), 5> FACT;
        TES5GRUPRecords<TES5::HDPTRecord, REV32(HDPT), 5> HDPT;
        TES5GRUPRecords<TES5::HAIRRecord, REV32(HAIR), 5> HAIR;
        TES5GRUPRecords<TES5::EYESRecord, REV32(EYES), 5> EYES;
        TES5GRUPRecords<TES5::RACERecord, REV32(RACE), 5> RACE;
        TES5GRUPRecords<TES5::SOUNRecord, REV32(SOUN), 5> SOUN;
        TES5GRUPRecords<TES5::ASPCRecord, REV32(ASPC), 5> ASPC;
        TES5GRUPRecords<TES5::MGEFRecord, REV32(MGEF), 5> MGEF;
        TES5GRUPRecords<TES5::SCPTRecord, REV32(SCPT), 5> SCPT;
        TES5GRUPRecords<TES5::ENCHRecord, REV32(ENCH), 5> ENCH;
        TES5GRUPRecords<TES5::SPELRecord, REV32(SPEL), 5> SPEL;
        TES5GRUPRecords<TES5::ACTIRecord, REV32(ACTI), 5> ACTI;
        TES5GRUPRecords<TES5::TACTRecord, REV32(TACT), 5> TACT;
        TES5GRUPRecords<TES5::TERMRecord, REV32(TERM), 5> TERM;
        TES5GRUPRecords<TES5::ARMORecord, REV32(ARMO), 5> ARMO;
        TES5GRUPRecords<TES5::BOOKRecord, REV32(BOOK), 5> BOOK;
        TES5GRUPRecords<TES5::CONTRecord, REV32(CONT), 5> CONT;
        TES5GRUPRecords<TES5::DOORRecord, REV32(DOOR), 5> DOOR;
        TES5GRUPRecords<TES5::INGRRecord, REV32(INGR), 5> INGR;
        TES5GRUPRecords<TES5::LIGHRecord, REV32(LIGH), 5> LIGH;
        TES5GRUPRecords<TES5::MISCRecord, REV32(MISC), 5> MISC;
        TES5GRUPRecords<TES5::STATRecord, REV32(STAT), 5> STAT;
        TES5GRUPRecords<TES5::SCOLRecord, REV32(SCOL), 5> SCOL;
        TES5GRUPRecords<TES5::MSTTRecord, REV32(MSTT), 5> MSTT;
        TES5GRUPRecords<TES5::PWATRecord, REV32(PWAT), 5> PWAT;
        TES5GRUPRecords<TES5::GRASRecord, REV32(GRAS), 5> GRAS;
        TES5GRUPRecords<TES5::TREERecord, REV32(TREE), 5> TREE;
        TES5GRUPRecords<TES5::FURNRecord, REV32(FURN), 5> FURN;
        TES5GRUPRecords<TES5::WEAPRecord, REV32(WEAP), 5> WEAP;
        TES5GRUPRecords<TES5::AMMORecord, REV32(AMMO), 5> AMMO;
        TES5GRUPRecords<TES5::NPC_Record, REV32(NPC_), 5> NPC_;
        TES5GRUPRecords<TES5::CREARecord, REV32(CREA), 5> CREA;
        TES5GRUPRecords<TES5::LVLCRecord, REV32(LVLC), 5> LVLC;
        TES5GRUPRecords<TES5::LVLNRecord, REV32(LVLN), 5> LVLN;
        TES5GRUPRecords<TES5::KEYMRecord, REV32(KEYM), 5> KEYM;
        TES5GRUPRecords<TES5::ALCHRecord, REV32(ALCH), 5> ALCH;
        TES5GRUPRecords<TES5::IDLMRecord, REV32(IDLM), 5> IDLM;
        TES5GRUPRecords<TES5::NOTERecord, REV32(NOTE), 5> NOTE;
        TES5GRUPRecords<TES5::COBJRecord, REV32(COBJ), 5> COBJ;
        TES5GRUPRecords<TES5::PROJRecord, REV32(PROJ), 5> PROJ;
        TES5GRUPRecords<TES5::LVLIRecord, REV32(LVLI), 5> LVLI;
        TES5GRUPRecords<TES5::WTHRRecord, REV32(WTHR), 5> WTHR;
        TES5GRUPRecords<TES5::CLMTRecord, REV32(CLMT), 5> CLMT;
        TES5GRUPRecords<TES5::REGNRecord, REV32(REGN), 5> REGN;
        TES5GRUPRecords<TES5::NAVIRecord, REV32(NAVI), 5> NAVI;
        TES5GRUPRecords<TES5::CELLRecord, REV32(CELL), 5> CELL;
        TES5GRUPRecords<TES5::WRLDRecord, REV32(WRLD), 5> WRLD;
        TES5GRUPRecords<TES5::DIALRecord, REV32(DIAL), 5> DIAL;
        TES5GRUPRecords<TES5::QUSTRecord, REV32(QUST), 5> QUST;
        TES5GRUPRecords<TES5::IDLERecord, REV32(IDLE), 5> IDLE;
        TES5GRUPRecords<TES5::PACKRecord, REV32(PACK), 5> PACK;
        TES5GRUPRecords<TES5::CSTYRecord, REV32(CSTY), 5> CSTY;
        TES5GRUPRecords<TES5::LSCRRecord, REV32(LSCR), 5> LSCR;
        TES5GRUPRecords<TES5::ANIORecord, REV32(ANIO), 5> ANIO;
        TES5GRUPRecords<TES5::WATRRecord, REV32(WATR), 5> WATR;
        TES5GRUPRecords<TES5::EFSHRecord, REV32(EFSH), 5> EFSH;
        TES5GRUPRecords<TES5::EXPLRecord, REV32(EXPL), 5> EXPL;
        TES5GRUPRecords<TES5::DEBRRecord, REV32(DEBR), 5> DEBR;
        ////TES5GRUPRecords<TES5::IMGSRecord, REV32(IMGS), 5> IMGS;
        ////TES5GRUPRecords<TES5::IMADRecord, REV32(IMAD), 5> IMAD;
        ////TES5GRUPRecords<TES5::FLSTRecord, REV32(FLST), 5> FLST;
        ////TES5GRUPRecords<TES5::PERKRecord, REV32(PERK), 5> PERK;
        ////TES5GRUPRecords<TES5::BPTDRecord, REV32(BPTD), 5> BPTD;
        //TES5GRUPRecords<TES5::ADDNRecord, REV32(ADDN), 5> ADDN;
        //TES5GRUPRecords<TES5::AVIFRecord, REV32(AVIF), 5> AVIF;
        //TES5GRUPRecords<TES5::RADSRecord, REV32(RADS), 5> RADS;
        //TES5GRUPRecords<TES5::CAMSRecord, REV32(CAMS), 5> CAMS;
        //TES5GRUPRecords<TES5::CPTHRecord, REV32(CPTH), 5> CPTH;
        //TES5GRUPRecords<TES5::VTYPRecord, REV32(VTYP), 5> VTYP;
        //TES5GRUPRecords<TES5::IPCTRecord, REV32(IPCT), 5> IPCT;
        //TES5GRUPRecords<TES5::IPDSRecord, REV32(IPDS), 5> IPDS;
        //TES5GRUPRecords<TES5::ARMARecord, REV32(ARMA), 5> ARMA;
        //TES5GRUPRecords<TES5::ECZNRecord, REV32(ECZN), 5> ECZN;
        //TES5GRUPRecords<TES5::MESGRecord, REV32(MESG), 5> MESG;
        //TES5GRUPRecords<TES5::RGDLRecord, REV32(RGDL), 5> RGDL;
        //TES5GRUPRecords<TES5::DOBJRecord, REV32(DOBJ), 5> DOBJ;
        //TES5GRUPRecords<TES5::LGTMRecord, REV32(LGTM), 5> LGTM;
        //TES5GRUPRecords<TES5::MUSCRecord, REV32(MUSC), 5> MUSC;
        //TES5GRUPRecords<TES5::IMODRecord, REV32(IMOD), 5> IMOD;
        //TES5GRUPRecords<TES5::REPURecord, REV32(REPU), 5> REPU;
        //TES5GRUPRecords<TES5::RCPERecord, REV32(RCPE), 5> RCPE;
        //TES5GRUPRecords<TES5::RCCTRecord, REV32(RCCT), 5> RCCT;
        //TES5GRUPRecords<TES5::CHIPRecord, REV32(CHIP), 5> CHIP;
        //TES5GRUPRecords<TES5::CSNORecord, REV32(CSNO), 5> CSNO;
        //TES5GRUPRecords<TES5::LSCTRecord, REV32(LSCT), 5> LSCT;
        //TES5GRUPRecords<TES5::MSETRecord, REV32(MSET), 5> MSET;
        //TES5GRUPRecords<TES5::ALOCRecord, REV32(ALOC), 5> ALOC;
        //TES5GRUPRecords<TES5::CHALRecord, REV32(CHAL), 5> CHAL;
        //TES5GRUPRecords<TES5::AMEFRecord, REV32(AMEF), 5> AMEF;
        //TES5GRUPRecords<TES5::CCRDRecord, REV32(CCRD), 5> CCRD;
        //TES5GRUPRecords<TES5::CMNYRecord, REV32(CMNY), 5> CMNY;
        //TES5GRUPRecords<TES5::CDCKRecord, REV32(CDCK), 5> CDCK;
        //TES5GRUPRecords<TES5::DEHYRecord, REV32(DEHY), 5> DEHY;
        //TES5GRUPRecords<TES5::HUNGRecord, REV32(HUNG), 5> HUNG;
        //TES5GRUPRecords<TES5::SLPDRecord, REV32(SLPD), 5> SLPD;
*/

        TES5File(Collection *_Parent, STRING FileName, STRING ModName, const UINT32 _flags);
        ~TES5File();

        Record * GetTES4();
        SINT32   LoadTES4();
        SINT32   Load(RecordOp &read_parser, RecordOp &indexer, std::vector<FormIDResolver *> &Expanders, std::vector<Record *> &DeletedRecords);
        UINT32   GetNumRecords(const UINT32 &RecordType);
        STRING   GetMasterName(UINT8 &CollapsedIndex);
	Record * CreateRecord(const UINT32 &RecordType, STRING const &RecordEditorID, Record *&SourceRecord, Record *&ParentRecord, CreationFlags &options);
        SINT32   DeleteRecord(Record *&curRecord, RecordOp &deindexer);
        SINT32   Save(STRING const &SaveName, std::vector<FormIDResolver *> &Expanders, bool CloseMod, RecordOp &indexer);

	void	 SetFilter(bool inclusive, boost::unordered_set<UINT32> &RecordTypes, boost::unordered_set<FORMID> &WorldSpaces);

        void     VisitAllRecords(RecordOp &op);
        void     VisitRecords(const UINT32 &RecordType, RecordOp &op);
    };