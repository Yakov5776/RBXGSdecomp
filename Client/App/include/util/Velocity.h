#pragma once
#include <G3DAll.h>

namespace RBX {
	class Velocity
	{
		public:
			G3D::Vector3 linear;
			G3D::Vector3 rotational;
			bool operator==(const Velocity&) const;
			bool operator!=(const Velocity&) const;
			Velocity(const G3D::Vector3&, const G3D::Vector3&);
			Velocity():linear(Vector3::zero()),rotational(Vector3::zero()) {}
			Velocity operator+(const Velocity&) const;
			Velocity operator-() const;
			G3D::Vector3 linearVelocityAtOffset(const G3D::Vector3&) const;
			Velocity velocityAtOffset(const G3D::Vector3&) const;
			Velocity rotateBy(const G3D::Matrix3&) const;

			static const Velocity& zero();
	};
}