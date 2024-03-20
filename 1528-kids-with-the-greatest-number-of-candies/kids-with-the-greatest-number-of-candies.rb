# @param {Integer[]} candies
# @param {Integer} extra_candies
# @return {Boolean[]}
def kids_with_candies(candies, extra_candies)
    max_candy = candies.max
    bool_candies = []
    candies.each do |candy|
        bool_candies << ((candy+extra_candies) >= max_candy) 
    end

    return bool_candies
end