/************************************************************************
    filename:   CEGUIFalImagerySection.h
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
#ifndef _CEGUIFalImagerySection_h_
#define _CEGUIFalImagerySection_h_

#include "falagard/CEGUIFalImageryComponent.h"

// Start of CEGUI namespace section
namespace CEGUI
{
    /*!
    \brief
        Class that encapsulates a re-usable collection of imagery specifications.
    */
    class ImagerySection
    {
    public:
        /*!
        \brief
            Constructor.
        */
        ImagerySection();

        /*!
        \brief
            ImagerySection constructor.  Name must be supplied, masterColours are set to 0xFFFFFFFF by default.

        \param name
            Name of the new ImagerySection.
        */
        ImagerySection(const String& name);

        /*!
        \brief
            Render the ImagerySection.

        \param srcWindow
            Window object to be used when calculating pixel values from BaseDim values.

        \param base_z
            base z value to be used for all imagery in the section.

        \param modColours
            ColourRect specifying colours to be modulated with the ImagerySection's master colours.  May be 0.

        \return
            Nothing.
        */
        void render(Window& srcWindow, float base_z, const CEGUI::ColourRect* modColours = 0) const;

        /*!
        \brief
            Add an ImageryComponent to this ImagerySection.

        \param img
            ImageryComponent to be added to the section (a copy is made)

        \return
            Nothing
        */
        void addImageryComponent(const ImageryComponent& img);

        /*!
        \brief
            Clear all ImageryComponents from this ImagerySection.

        \return
            Nothing
        */
        void clearImageryComponents();

        /*!
        \brief
            Return the current master colours set for this ImagerySection.

        \return
            ColourRect describing the master colour values in use for this ImagerySection.
        */
        const ColourRect& getMasterColours() const;

        /*!
        \brief
            Set the master colours to be used for this ImagerySection.

        \param cols
            ColourRect describing the colours to be set as the master colours for this ImagerySection.

        \return
            Nothing.
        */
        void setMasterColours(const ColourRect& cols);

        /*!
        \brief
            Return the name of this ImagerySection.

        \return
            String object holding the name of the ImagerySection.
        */
        const String& getName() const;

        /*!
        \brief
            Assignment operator
        */
        ImagerySection& operator=(const ImagerySection& other);

        /*!
        \brief
            Copy constructor.
        */
        ImagerySection(const ImagerySection& other);

    private:
        typedef std::vector<ImageryComponent> ImageryList;

        CEGUI::String       d_name;             //!< Holds the name of the ImagerySection.
        CEGUI::ColourRect   d_masterColours;    //!< Naster colours for the the ImagerySection (combined with colours of each ImageryComponent).
        ImageryList         d_images;           //!< Collection of ImageryComponent objects to be drawn for this ImagerySection.
    };

} // End of  CEGUI namespace section


#endif  // end of guard _CEGUIFalImagerySection_h_
