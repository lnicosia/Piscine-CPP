/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:52:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/10 15:35:43 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Contact{
	public:
		Contact(void);
		~Contact(void);
		
		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		/*std::string		getNickname(void) const;
		std::string		getLogin(void) const;
		std::string		getAddress(void) const;
		std::string		getMail(void) const;
		std::string		getPhone(void) const;
		std::string		getBirthday(void) const;
		std::string		getFavoriteMeal(void) const;
		std::string		getUnderwearColor(void) const;
		std::string		getSecret(void) const;*/
		void			setFirstName(std::string s);
		void			setLastName(std::string s);
		/*void			setNickname(std::string s);
		void			setLogin(std::string s);
		void			setAddress(std::string s);
		void			setMail(std::string s);
		void			setPhone(std::string s);
		void			setBirthday(std::string s);
		void			setFavoriteMeal(std::string s);
		void			setUnderwearColor(std::string s);
		void			setSecret(std::string s);*/
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string		_address;
		std::string		_mail;
		std::string		_phone;
		std::string		_birthday;
		std::string		_favorite_meal;
		std::string		_underwear_color;
		std::string		_secret;
};
