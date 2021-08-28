h,w,n,m = gets.split.map(&:to_i)
bulbs = n.times.map{gets.split.map(&:to_i)}
blocks = m.times.map{gets.split.map(&:to_i)}

map = Array.new(h) {Array.new(w, 0)}
block = 1
blocks.each do |x,y|
  map[x-1][y-1] = block
end

horizontal_light = 2
vertical_light = 3
bulbs.each do |x,y|
  nx = x-1
  ny = y-1
  next if map[nx][ny] == horizontal_light
  map[nx][ny] = horizontal_light
  ny.downto(0) do |yi|
    break if map[nx][yi] == block
    map[nx][yi] = horizontal_light
  end
  ny.upto(w-1) do |yi|
    break if map[nx][yi] == block
    map[nx][yi] = horizontal_light
  end
end
bulbs.each do |x,y|
  nx = x-1
  ny = y-1
  next if map[nx][ny] == vertical_light
  map[nx][ny] = vertical_light
  nx.downto(0) do |xi|
    break if map[xi][ny] == block
    map[xi][ny] = vertical_light
  end
  nx.upto(h-1) do |xi|
    break if map[xi][ny] == block
    map[xi][ny] = vertical_light
  end
end
ans = 0
h.times do |i|
  w.times do |j|
    ans += 1 if map[i][j] == horizontal_light || map[i][j] == vertical_light
  end
end
puts ans
