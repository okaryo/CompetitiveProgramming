N = gets.to_i
S = N.times.map{gets.chomp}
T = N.times.map{gets.chomp}
s_count = 0
S.each do |si|
  s_count += si.count('#')
end
t_count = 0
T.each do |ti|
  t_count += ti.count('#')
end
if s_count != t_count
  puts('No')
  exit 0
end

s_sharp = []
S.each_with_index do |si, i|
  si.each_char.with_index do |c, j|
    if c == '#'
      s_sharp << [i, j]
    end
  end
end

# dx = [0, 0, 1, 1, 1, 0, -1, -1, -1]
# dy = [0, 1, 1, 0, -1, -1, -1, 0, 1]
(-N).upto(N) do |dx|
  (-N).upto(N) do |dy|
    # 0
    t_match_count = 0
    s_sharp.each do |si, sj|
      x = si + dx
      y = sj + dy
      break if x < 0 || x >= N || y < 0 || y >= N
      if T[x][y] == '#'
        t_match_count += 1
      end
    end
    if t_match_count == t_count
      puts('Yes')
      exit 0
    end

    # 90
    t_match_count = 0
    s_sharp.each do |si, sj|
      x = -sj + dx
      y = si + dy
      break if x < 0 || x >= N || y < 0 || y >= N
      if T[x][y] == '#'
        t_match_count += 1
      end
    end
    if t_match_count == t_count
      puts('Yes')
      exit 0
    end

    # 180
    t_match_count = 0
    s_sharp.each do |si, sj|
      x = -si + dx
      y = -sj + dy
      break if x < 0 || x >= N || y < 0 || y >= N
      if T[x][y] == '#'
        t_match_count += 1
      end
    end
    if t_match_count == t_count
      puts('Yes')
      exit 0
    end
    t_match_count = 0

    # 270
    t_match_count = 0
    s_sharp.each do |si, sj|
      x = sj + dx
      y = -si + dy
      break if x < 0 || x >= N || y < 0 || y >= N
      if T[x][y] == '#'
        t_match_count += 1
      end
    end
    if t_match_count == t_count
      puts('Yes')
      exit 0
    end
  end
end
puts('No')
