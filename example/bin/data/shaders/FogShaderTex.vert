#version 130

varying float fogFactor;

void main( void )
{
    vec3 vVertex = vec3(gl_ModelViewMatrix * gl_Vertex);
    // Transform vertex to view-space
    const float LOG2 = 1.442695;
	gl_FogFragCoord = length(vVertex);
	fogFactor = exp2( -gl_Fog.density *
					   gl_Fog.density *
					   gl_FogFragCoord *
					   gl_FogFragCoord *
					   LOG2 );
	fogFactor = clamp(fogFactor, 0.0, 1.0);


    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

    gl_TexCoord[0].st = gl_MultiTexCoord0.xy;

}
