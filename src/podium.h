// Copyright 2022 The Forgotten Server Authors. All rights reserved.
// Use of this source code is governed by the GPL-2.0 License that can be found in the LICENSE file.

#ifndef FS_PODIUM_H
#define FS_PODIUM_H

#include "item.h"

class Player;

class Podium final : public Item
{
	public:
		explicit Podium(uint16_t type) : Item(type) {};

		Podium* getPodium() override {
			return this;
		}
		const Podium* getPodium() const override {
			return this;
		}

		Attr_ReadValue readAttr(AttrTypes_t attr, PropStream& propStream) override;
		void serializeAttr(PropWriteStream& propWriteStream) const override;

		void setOutfit(const Outfit_t& outfit) {
			this->outfit = outfit;
		}
		const Outfit_t getOutfit() const {
			return outfit;
		}

		bool hasFlag(PodiumFlags flag) const {
			return (this->flags & flag) != 0;
		}
		void setFlagValue(PodiumFlags flag, bool value) {
			if (value) {
				this->flags |= flag;
				return;
			}
			this->flags &= ~flag;
		}
		void setFlags(uint8_t flags) {
			this->flags = flags;
		}

		const Direction getDirection() const {
			return direction;
		}
		void setDirection(Direction direction) {
			this->direction = direction;
		}
	protected:
		Outfit_t outfit;
	private:
		uint8_t flags = PODIUM_SHOW_PLATFORM; // show platform only
		Direction direction = DIRECTION_SOUTH;
};

#endif
