#pragma once
#include <string>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>
#include "City.hpp"
#include "Color.hpp"
#include "CityClass.hpp"
#include <set>

using namespace pandemic;

namespace pandemic
{
    class Board
    {
    private:
    public:
    std::map<City, CityClass> citiesMap {
        {City::Algiers,  CityClass(City::Algiers)} ,
        {City::Atlanta,  CityClass(City::Atlanta)} ,
        {City::Baghdad,  CityClass(City::Baghdad)} ,
        {City::Bangkok,  CityClass(City::Bangkok)} ,
        {City::Beijing,  CityClass(City::Beijing)} ,
        {City::Bogota,  CityClass(City::Bogota)} ,
        {City::BuenosAires,  CityClass(City::BuenosAires)} ,
        {City::Cairo,  CityClass(City::Cairo)} ,
        {City::Chennai,  CityClass(City::Chennai)} ,
        {City::Chicago,  CityClass(City::Chicago)} ,
        {City::Delhi,  CityClass(City::Delhi)} ,
        {City::Essen,  CityClass(City::Essen)} ,
        {City::HoChiMinhCity,  CityClass(City::HoChiMinhCity)} ,
        {City::HongKong,  CityClass(City::HongKong)} ,
        {City::Istanbul,  CityClass(City::Istanbul)} ,
        {City::Jakarta,  CityClass(City::Jakarta)} ,
        {City::Johannesburg,  CityClass(City::Johannesburg)} ,
        {City::Karachi,  CityClass(City::Karachi)} ,
        {City::Khartoum,  CityClass(City::Khartoum)} ,
        {City::Kinshasa,  CityClass(City::Kinshasa)} ,
        {City::Kolkata,  CityClass(City::Kolkata)} ,
        {City::Lagos,  CityClass(City::Lagos)} ,
        {City::Lima,  CityClass(City::Lima)} ,
        {City::London,  CityClass(City::London)} ,
        {City::LosAngeles,  CityClass(City::LosAngeles)} ,
        {City::Madrid,  CityClass(City::Madrid)} ,
        {City::Manila,  CityClass(City::Manila)} ,
        {City::MexicoCity,  CityClass(City::MexicoCity)} ,
        {City::Miami,  CityClass(City::Miami)} ,
        {City::Milan,  CityClass(City::Milan)} ,
        {City::Montreal,  CityClass(City::Montreal)} ,
        {City::Moscow,  CityClass(City::Moscow)} ,
        {City::Mumbai,  CityClass(City::Mumbai)} ,
        {City::NewYork,  CityClass(City::NewYork)} ,
        {City::Osaka,  CityClass(City::Osaka)} ,
        {City::Paris,  CityClass(City::Paris)} ,
        {City::Riyadh,  CityClass(City::Riyadh)} ,
        {City::SanFrancisco,  CityClass(City::SanFrancisco)} ,
        {City::Santiago,  CityClass(City::Santiago)} ,
        {City::SaoPaulo,  CityClass(City::SaoPaulo)} ,
        {City::Seoul,  CityClass(City::Seoul)} ,
        {City::Shanghai,  CityClass(City::Shanghai)} ,
        {City::StPetersburg,  CityClass(City::StPetersburg)} ,
        {City::Sydney,  CityClass(City::Sydney)} ,
        {City::Taipei,  CityClass(City::Taipei)} ,
        {City::Tehran,  CityClass(City::Tehran)} ,
        {City::Tokyo,  CityClass(City::Tokyo)} ,
        {City::Washington,  CityClass(City::Washington)}
    };
    const std::map<City, Color> cities_colors {
    { City::Algiers, Color::Black },
    { City::Atlanta, Color::Blue },
    { City::Baghdad, Color::Black },
    { City::Bangkok, Color::Red },
    { City::Beijing, Color::Red },
    { City::Bogota, Color::Yellow },
    { City::BuenosAires, Color::Yellow },
    { City::Cairo, Color::Black },
    { City::Chennai, Color::Black },
    { City::Chicago, Color::Blue },
    { City::Delhi, Color::Black },
    { City::Essen, Color::Blue },
    { City::HoChiMinhCity, Color::Red },
    { City::HongKong, Color::Red },
    { City::Istanbul, Color::Black },
    { City::Jakarta, Color::Red },
    { City::Johannesburg, Color::Yellow },
    { City::Karachi, Color::Black },
    { City::Khartoum, Color::Yellow },
    { City::Kinshasa, Color::Yellow },
    { City::Kolkata, Color::Black },
    { City::Lagos, Color::Yellow },
    { City::Lima, Color::Yellow },
    { City::London, Color::Blue },
    { City::LosAngeles, Color::Yellow },
    { City::Madrid, Color::Blue },
    { City::Manila, Color::Red },
    { City::MexicoCity, Color::Yellow },
    { City::Miami, Color::Yellow },
    { City::Milan, Color::Blue },
    { City::Montreal, Color::Blue },
    { City::Moscow, Color::Black },
    { City::Mumbai, Color::Black },
    { City::NewYork, Color::Blue },
    { City::Osaka, Color::Red },
    { City::Paris, Color::Blue },
    { City::Riyadh, Color::Black },
    { City::SanFrancisco, Color::Blue },
    { City::Santiago, Color::Yellow },
    { City::SaoPaulo, Color::Yellow },
    { City::Seoul, Color::Red },
    { City::Shanghai, Color::Red },
    { City::StPetersburg, Color::Blue },
    { City::Sydney, Color::Red },
    { City::Taipei, Color::Red },
    { City::Tehran, Color::Black },
    { City::Tokyo, Color::Red },
    { City::Washington, Color::Blue }
};
std::map<City, std::set<City>> cities_connections {
    { City::Algiers, {City::Madrid, City::Paris, City::Istanbul, City::Cairo } },
    {  City::Atlanta, { City::Chicago,  City::Miami,  City::Washington } },
    { City::Baghdad, {City::Tehran, City::Istanbul, City::Cairo, City::Riyadh, City::Karachi } },
     { City::Bangkok, {City::Kolkata, City::Chennai, City::Jakarta, City::HoChiMinhCity, City::HongKong } },
     { City::Beijing, {City::Shanghai, City::Seoul } },
    { City::Bogota, {City::MexicoCity, City::Lima, City::Miami, City::SaoPaulo, City::BuenosAires } },
    { City::BuenosAires, {City::Bogota, City::SaoPaulo } },
    { City::Cairo, {City::Algiers, City::Istanbul, City::Baghdad, City::Khartoum, City::Riyadh } },
    { City::Chennai, {City::Mumbai, City::Delhi, City::Kolkata, City::Bangkok, City::Jakarta } },
    { City::Chicago, {City::SanFrancisco, City::LosAngeles, City::MexicoCity, City::Atlanta, City::Montreal } },
    { City::Delhi, {City::Tehran, City::Karachi, City::Mumbai, City::Chennai, City::Kolkata } },
    { City::Essen, {City::London, City::Paris, City::Milan, City::StPetersburg } },
    { City::HoChiMinhCity, {City::Jakarta, City::Bangkok, City::HongKong, City::Manila } },
    { City::HongKong, {City::Bangkok, City::Kolkata, City::HoChiMinhCity, City::Shanghai, City::Manila, City::Taipei } },
    { City::Istanbul, {City::Milan, City::Algiers, City::StPetersburg, City::Cairo, City::Baghdad, City::Moscow } },
    { City::Jakarta, {City::Chennai, City::Bangkok, City::HoChiMinhCity, City::Sydney } },
    { City::Johannesburg, {City::Kinshasa, City::Khartoum } },
    { City::Karachi, {City::Tehran, City::Baghdad, City::Riyadh, City::Mumbai, City::Delhi } },
    { City::Khartoum, {City::Cairo, City::Lagos, City::Kinshasa, City::Johannesburg } },
    { City::Kinshasa, {City::Lagos, City::Khartoum, City::Johannesburg } },
    { City::Kolkata, {City::Delhi, City::Chennai, City::Bangkok, City::HongKong } },
    { City::Lagos, {City::SaoPaulo, City::Khartoum, City::Kinshasa } },
    { City::Lima, {City::MexicoCity, City::Bogota, City::Santiago } },
    { City::London, {City::NewYork, City::Madrid, City::Essen, City::Paris } },
    { City::LosAngeles, {City::SanFrancisco, City::Chicago, City::MexicoCity, City::Sydney } },
    { City::Madrid, {City::London, City::NewYork, City::Paris, City::SaoPaulo, City::Algiers } },
    { City::Manila, {City::Taipei, City::SanFrancisco, City::HoChiMinhCity, City::Sydney } },
    { City::MexicoCity, {City::LosAngeles, City::Chicago, City::Miami, City::Lima, City::Bogota } },
    { City::Miami, {City::Atlanta, City::MexicoCity, City::Washington, City::Bogota } },
    { City::Milan, {City::Essen, City::Paris, City::Istanbul } },
    { City::Montreal, {City::Chicago, City::Washington, City::NewYork } },
    { City::Moscow, {City::StPetersburg, City::Istanbul, City::Tehran } },
    { City::Mumbai, {City::Karachi, City::Delhi, City::Chennai } },
    { City::NewYork, {City::Montreal, City::Washington, City::London, City::Madrid } },
    { City::Osaka, {City::Taipei, City::Tokyo } },
    { City::Paris, {City::Algiers, City::Essen, City::Madrid, City::Milan, City::London } },
    { City::Riyadh, {City::Baghdad, City::Cairo, City::Karachi } },
    { City::SanFrancisco, {City::LosAngeles, City::Chicago, City::Tokyo, City::Manila } },
    { City::Santiago, {City::Lima } },
    {  City::SaoPaulo, { City::Bogota,  City::BuenosAires,  City::Lagos,  City::Madrid } },
    {  City::Seoul, { City::Beijing,  City::Shanghai,  City::Tokyo } },
    {  City::Shanghai, { City::Beijing,  City::HongKong,  City::Taipei,  City::Seoul,  City::Tokyo } },
    {  City::StPetersburg, { City::Essen,  City::Istanbul,  City::Moscow } },
    {  City::Sydney, { City::Jakarta,  City::Manila,  City::LosAngeles } },
    {  City::Taipei, { City::Shanghai,  City::HongKong,  City::Osaka,  City::Manila } },
    {  City::Tehran, { City::Baghdad,  City::Moscow,  City::Karachi,  City::Delhi } },
    { City::Tokyo, {City::Seoul, City::Shanghai, City::Osaka, City::SanFrancisco } },
    {  City::Washington, { City::Atlanta,  City::NewYork,  City::Montreal,  City::Miami } }
};
//     Board(){
//     std::map<std::string,CityClass>::iterator iter = citiesMap.begin();
//     std::map<std::string,CityClass>::iterator endIter = citiesMap.end();
//     for (; iter != endIter; ++iter)
//     {
//     CityClass city = iter->second;
//     if (city.diseaseLevel!=0){
//         return false;
//         }
//     }
// }
        Board(){}
        
        
        int cures_found = 0;
        int research_labs_num = 0;
        friend std::ostream &operator<<(std::ostream &outStream, Board &board);
        int &operator[](City city);
        bool is_clean()
        {
            std::map<City,CityClass>::iterator iter = citiesMap.begin();
            std::map<City,CityClass>::iterator endIter = citiesMap.end();
            for (; iter != endIter; ++iter)
            {
                CityClass city = iter->second;
                if (city.diseaseLevel!=0){
                    return false;
                }
            }
            return true;
        }
        void remove_cures(){
            std::map<City,CityClass>::iterator iter = citiesMap.begin();
            std::map<City,CityClass>::iterator endIter = citiesMap.end();
            for (; iter != endIter; ++iter)
            {
                iter->second.cure_found= false;
            }
        };
    };

}






        // Board(){
        //  citiesMap["Algiers"] = CityClass(pandemic::City::Algiers, Color::Black);
        //  citiesMap["Atlanta"] = CityClass(City::Atlanta, Color::Blue);
        // citiesMap["Baghdad"] = CityClass(City::Baghdad, Color::);
        // citiesMap["Bangkok"] = CityClass(City::Bangkok, Color:: );
        // citiesMap["Beijing"] = CityClass(City::Beijing, Color:: );
        // citiesMap["Bogota"] = CityClass(City::Bogota, Color:: );
        // citiesMap["BuenosAires"] = CityClass(City::BuenosAires, Color:: );
        // citiesMap["Cairo"] = CityClass(City::Cairo, Color:: );
        // citiesMap["Chennai"] = CityClass(City::Chennai, Color:: );
        // citiesMap["Chicago"] = CityClass(City::Chicago, Color:: );
        // citiesMap["Delhi"] = CityClass(City::Delhi, Color:: );
        // citiesMap["Essen"] = CityClass(City::Essen, Color:: );
        // citiesMap["HoChiMinhCity"] = CityClass(City::HoChiMinhCity, Color:: );
        // citiesMap["HongKong"] = CityClass(City::HongKong, Color:: );
        // citiesMap["Istanbul"] = CityClass(City::Istanbul, Color:: );
        // citiesMap["Jakarta"] = CityClass(City::Jakarta, Color:: );
        // citiesMap["Johannesburg"] = CityClass(City::Johannesburg, Color:: );
        // citiesMap["Karachi"] = CityClass(City::Karachi, Color:: );
        // citiesMap["Khartoum"] = CityClass(City::Khartoum, Color:: );
        // citiesMap["Kinshasa"] = CityClass(City::Kinshasa, Color:: );
        // citiesMap["Kolkata"] = CityClass(City::Kolkata, Color:: );
        // citiesMap["Lagos"] = CityClass(City::Lagos, Color:: );
        // citiesMap["Lima"] = CityClass(City::Lima, Color:: );
        // citiesMap["London"] = CityClass(City::London, Color:: );
        // citiesMap["LosAngeles"] = CityClass(City::LosAngeles, Color:: );
        // citiesMap["Madrid"] = CityClass(City::Madrid, Color:: );
        // citiesMap["Manila"] = CityClass(City::Manila, Color:: );
        // citiesMap["MexicoCity"] = CityClass(City::MexicoCity, Color:: );
        // citiesMap["Miami"] = CityClass(City::Miami, Color:: );
        // citiesMap["Milan"] = CityClass(City::Milan, Color:: );
        // citiesMap["Montreal"] = CityClass(City::Montreal, Color:: );
        // citiesMap["Moscow"] = CityClass(City::Moscow, Color:: );
        // citiesMap["Mumbai"] = CityClass(City::Mumbai, Color:: );
        // citiesMap["NewYork"] = CityClass(City::NewYork, Color:: );
        // citiesMap["Osaka"] = CityClass(City::Osaka, Color:: );
        // citiesMap["Paris"] = CityClass(City::Paris, Color:: );
        // citiesMap["Riyadh"] = CityClass(City::Riyadh, Color:: );
        // citiesMap["SanFrancisco"] = CityClass(City::SanFrancisco, Color:: );
        // citiesMap["Santiago"] = CityClass(City::Santiago, Color:: );
        // citiesMap["SaoPaulo"] = CityClass(City::SaoPaulo, Color:: );
        // citiesMap["Seoul"] = CityClass(City::Seoul, Color:: );
        // citiesMap["Shanghai"] = CityClass(City::Shanghai, Color:: );
        // citiesMap["StPetersburg"] = CityClass(City::StPetersburg, Color:: );
        // citiesMap["Sydney"] = CityClass(City::Sydney, Color:: );
        // citiesMap["Taipei"] = CityClass(City::Taipei, Color:: );
        // citiesMap["Tehran"] = CityClass(City::Tehran, Color:: );
        // citiesMap["Tokyo"] = CityClass(City::Tokyo, Color:: );
        // citiesMap["Washington"] = CityClass(City::Washington, Color:: );
        //     citiesConnections.insert(City::Atlanta, City()), Color:: );

        // }