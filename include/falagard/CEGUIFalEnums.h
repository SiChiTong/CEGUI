/************************************************************************
    filename:   CEGUIFalEnums.h
    created:    Mon Jun 13 2005
    author:     Paul D Turner <paul@cegui.org.uk>
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://www.cegui.org.uk)
    Copyright (C)2004 - 2005 Paul D Turner (paul@cegui.org.uk)
 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.
 
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
 
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIFalEnums_h_
#define _CEGUIFalEnums_h_

// Start of CEGUI namespace section
namespace CEGUI
{
    /*!
    \brief
        Enumeration of possible values to indicate what a given dimension represents.
    */
    enum DimensionType
    {
        DT_LEFT_EDGE,       //!< Dimension represents the left edge of some entity (same as DT_X_POSITION).
        DT_X_POSITION,      //!< Dimension represents the x position of some entity (same as DT_LEFT_EDGE).
        DT_TOP_EDGE,        //!< Dimension represents the top edge of some entity (same as DT_Y_POSITION).
        DT_Y_POSITION,      //!< Dimension represents the y position of some entity (same as DT_TOP_EDGE).
        DT_RIGHT_EDGE,      //!< Dimension represents the right edge of some entity.
        DT_BOTTOM_EDGE,     //!< Dimension represents the bottom edge of some entity.
        DT_WIDTH,           //!< Dimension represents the width of some entity.
        DT_HEIGHT,          //!< Dimension represents the height of some entity.
        DT_X_OFFSET,        //!< Dimension represents the x offset of some entity (usually only applies to an Image entity).
        DT_Y_OFFSET,        //!< Dimension represents the y offset of some entity (usually only applies to an Image entity).
        DT_INVALID          //!< Invalid / uninitialised DimensionType.
    };

    /*!
    \brief
        Enumeration of possible values to indicate the vertical formatting to be used for an image component.
    */
    enum VerticalFormatting
    {
        VF_TOP_ALIGNED,         //!< Top of Image should be aligned with the top of the destination area.
        VF_CENTRE_ALIGNED,      //!< Image should be vertically centred within the destination area.
        VF_BOTTOM_ALIGNED,      //!< Bottom of Image should be aligned with the bottom of the destination area.
        VF_STRETCHED,           //!< Image should be stretched vertically to fill the destination area.
        VF_TILED                //!< Image should be tiled vertically to fill the destination area (bottom-most tile may be clipped).
    };

    /*!
    \brief
        Enumeration of possible values to indicate the horizontal formatting to be used for an image component.
    */
    enum HorizontalFormatting
    {
        HF_LEFT_ALIGNED,        //!< Left of Image should be aligned with the left of the destination area.
        HF_CENTRE_ALIGNED,      //!< Image should be horizontally centred within the destination area.
        HF_RIGHT_ALIGNED,       //!< Right of Image should be aligned with the right of the destination area.
        HF_STRETCHED,           //!< Image should be stretched horizontally to fill the destination area.
        HF_TILED                //!< Image should be tiled horizontally to fill the destination area (right-most tile may be clipped).
    };

} // End of  CEGUI namespace section


#endif  // end of guard _CEGUIFalEnums_h_
