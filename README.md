About
======================

NGsG (New GoldSrc Game) is what I refer to as 'the great experiment.' The very vague, simplistic and literal name follows a convention I've used for some time (NSG - New Survival Game, USG - Unity Survival Game, et al).

Purpose
======================

I've been meaning to start production of an original First Person Shooter in a retro style/engine - a boomer shooter, basically. After playing a really well made mod for Half Life, I decided to wander back down the rabbit hole of modding hl1, thankfully I already had the sdk set up for Visual Studio and got to work.

I made great strides in establishing the mechanics that would define combat in my mod, I built new entities, started modelling and texturing etc. I came to realize however that HL1 is quite alienating for those not used to it's quirks and unappreciative of it's vintage charm - it's just too old and basic. And so, I'm moving on, but not before ensuring I have documented my progress.

Build version: 26w39a
======================
This first 'numbered' build contains the most basic additions - a new stat for the player, and the means to increment it via a function call or a console command (rm_stat).

Build version: 26w41a
======================
This version contains the updated functionality for rm_stat. A hammer placeable entity for a pickup item that increases rm_stat, a custom hud element that piggybacks on the health readout's code, and new impulse command bound to a key to 'use' the new item, decrementing rm_stat and filling suit power.

The intention was for this new stat to be used to active a range of abilities to supplement the weapons sandbox and leverage environmental features.

Half Life 1 SDK LICENSE
======================

Half Life 1 SDK Copyright© Valve Corp.  

THIS DOCUMENT DESCRIBES A CONTRACT BETWEEN YOU AND VALVE CORPORATION (“Valve”).  PLEASE READ IT BEFORE DOWNLOADING OR USING THE HALF LIFE 1 SDK (“SDK”). BY DOWNLOADING AND/OR USING THE SOURCE ENGINE SDK YOU ACCEPT THIS LICENSE. IF YOU DO NOT AGREE TO THE TERMS OF THIS LICENSE PLEASE DON’T DOWNLOAD OR USE THE SDK.

You may, free of charge, download and use the SDK to develop a modified Valve game running on the Half-Life engine.  You may distribute your modified Valve game in source and object code form, but only for free. Terms of use for Valve games are found in the Steam Subscriber Agreement located here: http://store.steampowered.com/subscriber_agreement/ 

You may copy, modify, and distribute the SDK and any modifications you make to the SDK in source and object code form, but only for free.  Any distribution of this SDK must include this license.txt and third_party_licenses.txt.  
 
Any distribution of the SDK or a substantial portion of the SDK must include the above copyright notice and the following: 

DISCLAIMER OF WARRANTIES.  THE SOURCE SDK AND ANY OTHER MATERIAL DOWNLOADED BY LICENSEE IS PROVIDED “AS IS”.  VALVE AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES WITH RESPECT TO THE SDK, EITHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, TITLE AND FITNESS FOR A PARTICULAR PURPOSE.  

LIMITATION OF LIABILITY.  IN NO EVENT SHALL VALVE OR ITS SUPPLIERS BE LIABLE FOR ANY SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR INABILITY TO USE THE ENGINE AND/OR THE SDK, EVEN IF VALVE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.  
 
 
If you would like to use the SDK for a commercial purpose, please contact Valve at sourceengine@valvesoftware.com.
