n = gets.to_i
txy = n.times.map{gets.split.map(&:to_i)}

ans = 'Yes'
now_x = 0
now_y = 0
now_t = 0
txy.each do |t, x, y|
  diff_x = (now_x - x).abs
  diff_y = (now_y - y).abs
  diff_t = t - now_t
  dist = (diff_x + diff_y)
  unless diff_t >= dist && (diff_t - dist).even?
    ans = 'No'
    break
  end
  now_t = t
  now_x = x
  now_y = y
end

puts ans