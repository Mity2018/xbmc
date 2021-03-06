/*
 *      Copyright (C) 2005-2013 Team XBMC
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

/*!
\file GUIVideoControl.h
\brief
*/

#include "GUIControl.h"

/*!
 \ingroup controls
 \brief
 */
class CGUIVideoControl :
      public CGUIControl
{
public:
  CGUIVideoControl(int parentID, int controlID, float posX, float posY, float width, float height);
  ~CGUIVideoControl(void) override;
  CGUIVideoControl *Clone() const override { return new CGUIVideoControl(*this); };

  void Process(unsigned int currentTime, CDirtyRegionList &dirtyregions) override;
  void Render() override;
  void RenderEx() override;
  EVENT_RESULT OnMouseEvent(const CPoint &point, const CMouseEvent &event) override;
  bool CanFocus() const override;
  bool CanFocusFromPoint(const CPoint &point) const override;
};

