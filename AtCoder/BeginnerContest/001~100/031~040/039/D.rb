h, w = gets.split.map(&:to_i)
table = h.times.map{gets.chomp}

n_table = Array.new(h){'#' * w}
dx = [-1, -1, -1,  0, 0,  1, 1, 1]
dy = [-1,  0,  1, -1, 1, -1, 0, 1]
h.times do |i|
  w.times do |j|
    next if table[i][j] == '#'
    n_table[i][j] = '.'
    8.times do |k|
      n_x = i + dx[k]
      n_y = j + dy[k]
      next if n_x < 0 || n_x >= h || n_y < 0 || n_y >= w
      n_table[n_x][n_y] = '.'
    end
  end
end

h.times do |i|
  w.times do |j|
    next if table[i][j] != '#' || n_table[i][j] != '.'
    ok = false
    8.times do |k|
      n_x = i + dx[k]
      n_y = j + dy[k]
      next if n_x < 0 || n_x >= h || n_y < 0 || n_y >= w
      if n_table[n_x][n_y] == '#'
        ok = true
      end
    end
    unless ok
      puts 'impossible'
      exit
    end
  end
end

puts 'possible'
h.times do |i|
  puts n_table[i]
end
