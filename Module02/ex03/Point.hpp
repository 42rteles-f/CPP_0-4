/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 06:44:34 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 06:44:34 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(Point& tocopy);
		Point(const float a, const float b);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point&	operator=(const Point& receive);
} ;

#endif