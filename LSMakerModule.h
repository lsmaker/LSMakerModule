/***
 *	Name: LSMakerModule.h
 *	Author: Albert Lloveras Carbonell (alloveras@salleurl.edu)
 *	Last Revision: 18/07/2016
 *	Description: This class defines the interface between the LSMaker Scheduler
 *  and all of its third-party modules. For this reason, any module class that
 *  wants to be attatched to the LSMaker scheduler MUST inherit from this base
 *  class and implement its virtual methods.
***/

#ifndef _LSM_LSMAKERMODULE_H_
#define _LSM_LSMAKERMODULE_H_

namespace LSM{

    class LSMakerModule{
        public:
            virtual void init(void) = 0;
            virtual void execute(void) = 0;
            virtual void destroy(void) = 0;
            virtual String getModuleName(void) = 0;
    };
    
}

#endif
