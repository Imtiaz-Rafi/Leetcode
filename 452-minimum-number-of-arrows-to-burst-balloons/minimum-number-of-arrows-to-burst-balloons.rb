# @param {Integer[][]} points
# @return {Integer}
def find_min_arrow_shots(points)
    points.sort!{ |a, b| a[0] <=> b[0] }
    # points.sort_by! { |a, b| a }
    
    arrow = 1
    end_value = points[0][1]

    points.each do |point|
        if point[0] > end_value
            arrow += 1
            end_value = point[1]
        else
            end_value = [end_value, point[1]].min
        end
    end
    
    return arrow
end