N = gets.to_i
xy = N.times.map{gets.split.map(&:to_i)}.sort
ans = 0
N.times do |i|
  N.times do |j|
    if xy[i][0] < xy[j][0] && xy[i][1] < xy[j][1]
      a = xy.bsearch {|x,y| x == xy[i][0] && y == xy[j][1]}
      b = xy.bsearch {|x,y| x == xy[j][0] && y == xy[i][1]}
      if a != nil && b != nil
        ans += 1
      end
    end
  end
end
puts(ans)
